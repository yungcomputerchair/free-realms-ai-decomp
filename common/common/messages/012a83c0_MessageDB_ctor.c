// addr: 0x012a83c0
// name: MessageDB_ctor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall MessageDB_ctor(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the global MessageDB object, initializing internal maps, default
                       language string "en", default version 0x9f3, and loading the initial index.
                       Evidence is MessageDB_RuleSetNameMap_ctor and MessageDB_loadIndexForVersion
                       calls. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166c184;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012a0600(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  FUN_0129d730();
  local_4._0_1_ = 1;
  MessageDB_RuleSetNameMap_ctor((void *)((int)param_1 + 0x18));
  local_4._0_1_ = 2;
  FUN_0129d6c0();
  *(undefined4 *)((int)param_1 + 0x50) = 0xf;
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined1 *)((int)param_1 + 0x3c) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)param_1 + 0x38),"en",2);
  *(undefined4 *)((int)param_1 + 0x30) = 0x9f3;
  MessageDB_loadIndexForVersion(param_1,0x9f3);
  ExceptionList = local_c;
  return param_1;
}

