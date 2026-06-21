// addr: 0x0102f810
// name: GroupRosterState_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall GroupRosterState_ctor(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a state object containing a SoeUtil_List<GroupMember,8> and
                       SoeUtil_List<Invitation,8>, stores the member cap, clears a flag, and
                       initializes two global/default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01636ad6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SoeUtil_List_GroupMember_8_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  SoeUtil_List_Invitation_8_ctor();
  *(undefined4 *)(param_1 + 0x109c) = param_2;
  *(undefined1 *)(param_1 + 0x10a0) = 0;
  *(undefined4 *)(param_1 + 0x10a8) = DAT_01cb64a8;
  *(undefined4 *)(param_1 + 0x10ac) = DAT_01cb64ac;
  ExceptionList = local_c;
  return param_1;
}

