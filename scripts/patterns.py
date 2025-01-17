from typing import List

class Item:
    name: str
    pattern: str
    expected: int
    index: int
    offset: int

    def __init__(self, pattern: str, name: str = '', expected: int = 1, index: int = 0, offset: int = 0) -> None:
        self.name = name
        self.pattern = pattern
        self.expected = expected
        self.index = index
        self.offset = offset

class Group:
    name: str
    pointers: List[Item]
    functions: List[Item]

    def __init__(self, name: str, pointers: List[Item] = [], functions: List[Item] = []) -> None:
        self.name = name
        self.pointers = pointers
        self.functions = functions

def get_groups() -> List[Group]:
    # Add new patterns here, please try to keep the groups ordering alphabetized.
    return [
        Group(name='CBaseFunction', functions=[
            Item(name='ExecuteScripted', pattern='40 55 48 81 EC ? ? ? ? 48 8D 6C 24 ? 8B 81 ? ? ? ?', expected=1, index=0),
            Item(name='ExecuteNative', pattern='48 89 5C 24 ? 57 48 81 EC ? ? ? ? 48 8B 02', expected=10, index=1),
            Item(name='InternalExecute', pattern='40 55 41 54 41 55 41 56 41 57 48 81 EC C0 01 00 00 48 8D 6C 24 40 F6', expected=1, index=0),
            Item(name='Register', pattern='48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0 44 8B 4C 24 58 48 8B DA 41 83 C9 01', expected=1, index=0)
        ]),

        Group(name='CBaseRTTIType', functions=[
            Item(name='sub_80', pattern='40 53 55 57 41 55 41 56 48 83 EC 20 8B 41 70', expected=1, index=0),
            Item(name='sub_88', pattern='48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 40 48 8B F9', expected=25, index=0),
            Item(name='sub_90', pattern='48 89 5C 24 08 48 89 74 24 10 57 48 81 EC ?', expected=297, index=1),
            Item(name='sub_98', pattern='40 53 55 57 48 83 EC 50 48 8B D9', expected=2, index=0),
            Item(name='sub_A0', pattern='48 8B 02 4C 8D 05 ? ? ? ? 4C 8B CA 48 8B D1', expected=1, index=0)
        ]),

        Group(name='CClass', functions=[
            Item(name='Unserialize', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30 49 8B F9', expected=2, index=0),
            Item(name='ToString', pattern='48 8B C4 55 48 8D 68 ? 48 81 EC ? ? ? ?', expected=69, index=1),
            Item(name='sub_80', pattern='40 53 55 57 41 55 41 56', expected=15, index=0),
            Item(name='sub_88', pattern='48 89 5C 24 08 48 89 6C 24 18 56 57 41 56', expected=208, index=8),
            Item(name='sub_90', pattern='48 89 5C 24 10 55 57 41 56 48 81 EC 80 00 00 00', expected=3, index=0),
            Item(name='sub_98', pattern='48 89 5C 24 10 55 57 41 56 48 81 EC 80 00 00 00', expected=3, index=1),
            Item(name='sub_A0', pattern='48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 20', expected=104, index=0),
            Item(name='sub_B0', pattern='48 89 5C 24 ? 55 57 41 57 48 83 EC ?', expected=10, index=0),
            Item(name='sub_C0', pattern='48 83 EC ? 48 89 5C 24 78 48 89 7C 24 60', expected=1, index=0),
            Item(name='GetMaxAlignment', pattern='48 89 5C 24 10 57 48 83 EC 30 F6 41 70 0C 48 8B F9', expected=1, index=0),
            Item(name='sub_D0', pattern='48 89 4C 24 08 53 56 48 83 EC 58', expected=1, index=0),

            Item(name='CreateInstance', pattern='40 56 41 56 48 83 EC ? 41 0F B6 F0', expected=1, index=0),
            Item(name='GetProperty', pattern='48 89 5C 24 18 56 48 83 EC 20 83 B9 F0 00 00 00 00', expected=1, index=0),
            Item(name='GetProperties', pattern='48 89 5C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56 48 83 EC 30 4C 8B F1 48 8B FA', expected=1, index=0),
            Item(name='ClearScriptedData', pattern='48 89 5C 24 18 56 57 41 57 48 83 EC 40 80 A1 C9 02 00 00 EF', expected=1, index=0)
        ]),

        Group(name='TTypedClass', functions=[
            Item(name='IsEqual', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 54 41 56 41 57', expected=425, index=5)
        ]),

        Group(name='CEnum', functions=[
            Item(name='Unserialize', pattern='48 89 5C 24 08 48 89 74 24 18 57 48 83 EC ? 8B 42 ?', expected=1, index=0),
            Item(name='ToString', pattern='40 ? 48 83 EC ? 44 0F B6 49 20 33 C0', expected=1, index=0),
            Item(name='FromString', pattern='48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30 48 8B F9 49 8B D8', expected=1, index=0)
        ]),

        Group(name='CBitfield', functions=[
            Item(name='Unserialize', pattern='48 89 5C 24 08 48 89 6C 24 18 56 57 41 55', expected=2, index=0),
            Item(name='ToString', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 83 EC 30 0F B6 41 20', expected=1, index=0),
            Item(name='FromString', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 83 EC 40', expected=77, index=3)
        ]),

        Group(name='CClassFunction', functions=[
            Item(name='ctor', pattern='48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0', expected=3, index=1)
        ]),

        Group(name='CClassStaticFunction', functions=[
            Item(name='ctor', pattern='48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0', expected=3)
        ]),

        Group(name='CGameEngine', pointers=[
            Item(pattern='48 89 05 ? ? ? ? ? 8D ? 30 01 00 00', offset=3)
        ]),

        Group(name='CGlobalFunction', functions=[
            Item(name='ctor', pattern='48 89 5C 24 08 57 48 83 EC 20 49 8B D9', expected=6)
        ]),

        Group(name='CNamePool', functions=[
            Item(name='AddCstr', pattern='48 89 5C 24 08 57 48 83 EC 30 45 33 C0 48 8B F9'),
            Item(name='AddCString', pattern='48 89 5C 24 08 48 89 74  24 10 57 48 83 EC 20 48 8B F1 48 8B DA 48 8B CA E8 ? ? ? ? 48 8B CB 48 8B F8 E8'),
            Item(name='AddPair', pattern='48 83 EC 38 33 C0 48 89 54 24 20 48 85 D2'),
            Item(name='Get', pattern='48 83 EC 38 48 8B 11 48 8D 4C 24 20 E8')
        ]),

        Group(name='CRTTIRegistrator', pointers=[
            Item(name='RTTIAsyncId', pattern='B8 01 00 00 00 F0 0F C1 05 ? ? ? ? FF C0 C3', expected=1, index=0, offset=9)
        ],
        functions=[
            Item(name='Add', pattern='48 89 5C 24 08 48 89 74 24 20 4C 89 44 24 18 48 89 54 24 10 57 48 83 EC 50 48 8B F1')
        ]),

        Group(name='CRTTISystem', functions=[
            Item(name='Get', pattern='40 53 48 83 EC 20 65 48 8B 04 25 58 00 00 00 48 8D 1D ? ? ? ?')
        ]),

        Group(name='CStack', functions=[
            Item(name='ctor', pattern='48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8D 05 ? ? ? ? 48 C7 41 08 00 00 00 00', expected=3, index=1)
        ]),

        Group(name='CString', functions=[
            Item(name='ctor_str', pattern='48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 33 FF', expected=20, index=0),
            Item(name='ctor_span', pattern='48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 33 C0 41 8B F8 48 8B F2'),
            Item(name='copy', pattern='40 53 48 83 EC 20 48 8B D9 48 3B CA', expected=7, index=0),
            Item(name='dtor', pattern='40 53 48 83 EC 20 48 8B D9 8B 49 14 8B C1 C1 E8', expected=1, index=0)
        ]),

        Group(name='DynArray', functions=[
            Item(name='Realloc', pattern='48 89 6C 24 20 57 41 54 41 56 48 83 EC ?', expected=2, index=0)
        ]),

        Group(name='Handle', functions=[
            Item(name='ctor', pattern='48 89 5C 24 ? 57 48 83 EC ? 48 89 11', expected=20, index=0),
            Item(name='DecWeakRef', pattern='40 53 48 83 EC ? 48 8B D9 48 8B 49 08 48 85 C9 74 ? B8 FF FF FF FF', expected=85, index=1)
        ]),

        Group(name='ISerializable', functions=[
            Item(name='sub_30', pattern='48 83 EC ? E8 ? ? ? ? 48 85 C0', expected=32, index=1),
            Item(name='sub_40', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC ? 48 8B F2', expected=72, index=0),
            Item(name='sub_78', pattern='48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 44 88 4C 24 20 55 41 54', expected=3, index=0),
            Item(name='sub_A0', pattern='48 83 EC ? 48 8B 01 FF 50 08', expected=7, index=1),
            Item(name='sub_C0', pattern='40 53 48 83 EC ? 48 8B DA E8 ? ? ? ?', expected=115, index=1)
        ]),

        Group(name='IScriptable', functions=[
            Item(name='sub_D8', pattern='40 53 48 83 EC ? 48 8B 01 49 8B D8', expected=4, index=0),
            Item(name='GetValueHolder', pattern='40 53 48 83 EC 20 48 83 79 38 00 48 8B D9 75', expected=2, index=1),
            Item(name='DestructValueHolder', pattern='40 56 48 83 EC 30 48 83 79 38 00 48 8B F1 0F 84', expected=1, index=0)
        ]),

        Group(name='JobHandle', functions=[
            Item(name='ctor', pattern='40 53 48 83 EC 20 0F B7 02 48 8B D9 48 8B 0D ? ? ? ? 4D 8B C8 66 89 44 24 30 4C 8D 44 24 30'),
            Item(name='dtor', pattern='40 53 48 83 EC 20 48 8B 11 48 8B D9 48 85 D2 74 13 48 8B 0D ? ? ? ? E8 ? ? ? ?'),
            Item(name='Join', pattern='48 89 5C 24 08 57 48 83 EC 40 48 8B FA 48 8B D9 48 8B 12 48 8B 0D ? ? ? ? E8 ? ? ? ?')
        ]),

        Group(name='JobInternals', functions=[
            Item(name='SetLocalThreadParam', pattern='8B 15 ? ? ? ? 65 48 8B 04 25 58 00 00 00 41 B8 ? ? ? ? 48 8B 04 D0 41 88 0C 00 C3', expected=4, index=2),
            Item(name='DispatchJob', pattern='4D 8B 08 4C 8B 02 48 8B D1 48 8B 0D ? ? ? ? E9 ? ? ? ?', expected=2, index=0)
        ]),

        Group(name='JobQueue', functions=[
            Item(name='ctor_FromGroup', pattern='48 89 5C 24 10 48 89 6C 24 18 56 57 41 54 41 56 41 57 48 83 EC 20 0F B7 7A 30 4C 8B F1'),
            Item(name='ctor_FromParams', pattern='48 89 5C 24 10 48 89 6C 24 18 56 57 41 56 48 83 EC 20 48 8D 05 ? ? ? ? 49 8B D8 48 89 01'),
            Item(name='dtor', pattern='40 53 48 83 EC 20 80 79 30 00 48 8B D9 75 ? E8 ? ? ? ? 48 8D 4B 18 E8 ? ? ? ? 48 8D 4B 10'),
            Item(name='Capture', pattern='48 89 5C 24 18 57 48 83  EC 20 48 8B FA 48 8B D9 E8 ? ? ? ? 48 8D 53 10 48 8B CF E8'),
            Item(name='SyncWait', pattern='48 89 5C 24 18 57 48 83 EC 20 48 8B D9 48 83 C1 18 E8 ? ? ? ? 84 C0 75 ? 48 8D 4B 10')
        ]),

        Group(name='Memory', functions=[
            Item(name='Vault::Get', pattern='48 8D 05 ? ? ? ? C3', expected=1372, index=0),
            Item(name='Vault::Alloc', pattern='48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30', expected=1986, index=5),
            Item(name='Vault::AllocAligned', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30', expected=454, index=0),
            Item(name='Vault::Realloc', pattern='48 89 5C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56', expected=298, index=0),
            Item(name='Vault::ReallocAligned', pattern='48 89 5C 24 18 56 57 41 56 48 83 EC 40', expected=16, index=0),
            Item(name='Vault::Free', pattern='48 89 5C 24 10 57 48 83 EC 20 4C 8B 81 00 C9 00 00', expected=1, index=0),
            Item(name='Vault::Unk1', pattern='48 89 5C 24 08 57 48 83 EC 20 4C 8B 81 00 C9 00 00', expected=2, index=0),
            Item(name='PoolStorage::OOM', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56 48 83 EC ? 48 8B 59 ?', expected=27, index=0)
        ]),

        Group(name='Streams', functions=[
            Item(name='MemoryStream::ctor', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B DA 49 8B E9', expected=3, index=1)
        ]),

        Group(name='TweakDB', functions=[
            Item(name='Get', pattern='48 83 EC ? 48 8B 05 ? ? ? ? 48 85 C0 75 68', expected=1, index=0),
            Item(name='StaticFlatDataBuffer', pattern='48 89 1D ? ? ? ? 48 C1 E7 04', expected=1, index=0),
            Item(name='InitFlatValue_ExceptInt32', pattern='48 89 5C 24 08 48 89 6C 24 18 48 89 74 24 20 57 41 56 41 57', expected=51, index=13),
            Item(name='FlatInt32ValueVftable', pattern='48 8D ? ? ? ? ? 0F 1F 84 00 00 00 00 00 48 8B 4D E7', expected=1, index=0),
            Item(name='FlatArrayInt32ValueVftable', pattern='48 8D 05 ? ? ? ? 48 8D ? ? 48 89 06', expected=50, index=10),
            Item(name='CreateRecord', pattern='48 89 5C 24 08 ? 89 ? 24 18 57 48 83 EC 30 8B C2'),
        ]),

        Group(name='OpcodeHandlers', functions=[
            Item(name='Get', pattern='4C 8D 15 ? ? ? ? 33 C0 48 C7 44 24 20 00 00 00 00', expected=14, index=0)
        ]),

        Group(name='ResourceDepot', pointers=[
            Item(pattern="48 89 0D ? ? ? ? C3", offset=3, expected=26, index=2)
        ]),

        Group(name='ResourceLoader', pointers=[
            Item(pattern='48 8B 87 ? ? ? ? 48 8B 5C 24 ? 48 89 05 ? ? ? ? 48 83 C4 20 5F C3', offset=15)
        ],
        functions=[
            Item(name='FindToken', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B F1 49 8B D8 48 83 C1 40 48 8B EA E8'),
            Item(name='LoadAsync', pattern='4C 8B DC 49 89 5B 10 49 89 6B 18 49 89 73 20 57 48 83 EC 50 48 8B 69 48 33 C0 49 C7 43 D8 00 00 00 00')
        ]),

        Group(name='ResourceReference', functions=[
            Item(name='Load', pattern='48 89 5C 24 10 57 48 83 EC 30 48 8D 59 08 48 8B F9 48 8B 0B 48 85 C9'),
            Item(name='Fetch', pattern='40 53 48 83 EC 20 48 8B D9 E8 ? ? ? ? 48 8B 4B 08 48 85 C9 74 0A'),
            Item(name='Reset', pattern='48 83 EC 38 45 33 C0 4C 89 01 48 8B 51 10 48 8B 41 08 48 89 54 24 28 4C 89 41 10 48 89 44 24 20')
        ]),

        Group(name='ResourceToken', functions=[
            Item(name='dtor', pattern='48 89 5C 24 10 57 48 83 EC 20 8B 41 58 48 8B D9 85 C0 74'),
            Item(name='Fetch', pattern='40 53 48 83 EC 40 8B 41 58 48 8B D9 0F 29 74 24 30 0F 29 7C 24 20 85 C0 74 0A'),
            Item(name='OnLoaded', pattern='40 55 53 56 57 41 56 48 8D 6C 24 C9 48 81 EC F0 00 00 00 48 8B 41 08 0F 57 C0 49 8B F8 4C 8B F2'),
            Item(name='CancelUnk38', pattern='40 53 48 83 EC 20 48 8B D9 B9 08 00 00 00 E8'),
            Item(name='DestructUnk38', pattern='40 53 48 83 EC 20 48 8B D9 48 8B 49 08 48 85 C9 74 ? B8 FF FF FF FF F0 0F C1 01 83 F8 01 75', expected=73, index=1)
        ]),

        Group(name='UpdateRegistrar', functions=[
            Item(name='RegisterGroupUpdate', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 81 EC C0 00 00 00 48 8B BC 24 00 01 00 00'),
            Item(name='RegisterBucketUpdate', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 81 EC C0 00 00 00 48 8B BC 24 08 01 00 00'),
        ]),

        Group(name='CRTTIScriptReferenceType', functions=[
            Item(name='ctor', pattern='48 89 5C 24 18 57 48 83 EC 20 48 8B FA 48 8B D9 E8 ? ? ? ? 48 8D 05 '),
            Item(name='Set', pattern='48 89 5C 24 20 57 48 83  EC 20 4C 89 41 18 48 8B')
        ])
    ]
