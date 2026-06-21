// addr: 0x013a2630
// name: CollectionData_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CollectionData_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* Constructs a CollectionData persistent root: installs
                       PersistentBase/PersistentRoot/CollectionData vtables, initializes strings, an
                       embedded item tree, counters, and flags. Evidence is the explicit
                       CollectionData::vftable assignment. */
  puStack_8 = &LAB_01685987;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentRoot::vftable;
  *param_1 = CollectionData::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  uStack_3 = 0;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  local_4 = 4;
  CollectionData_itemTree_ctor(uVar1);
  param_1[0x20] = 0xf;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  _local_4 = CONCAT31(uStack_3,6);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1),"",0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8),"",0);
  param_1[0x19] = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x1a),"",
             0);
  param_1[0x21] = 0;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0;
  ExceptionList = local_c;
  return param_1;
}

