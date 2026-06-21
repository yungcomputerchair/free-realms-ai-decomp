// addr: 0x0102e190
// name: SoeUtil_List_GroupMember_8_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall SoeUtil_List_GroupMember_8_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* constructs a SoeUtil::List<GroupMember,8> after initializing the -1 base-list
                       state. */
  puStack_8 = &LAB_016369b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = SoeUtil::List<GroupMember,-1>::vftable;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_4 = 0;
  *param_1 = SoeUtil::List<GroupMember,8>::vftable;
  init_8_bucket_free_list_216byte(param_1 + 4);
  ExceptionList = local_c;
  return param_1;
}

