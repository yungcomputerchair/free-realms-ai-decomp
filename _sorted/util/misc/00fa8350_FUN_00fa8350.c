// addr: 0x00fa8350
// name: FUN_00fa8350
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00fa8350(int param_1,int param_2,code *param_3)

{
  int iVar1;
  undefined4 local_2c;
  int *local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char local_10;
  undefined1 local_f;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Parses a Login::GameServerData-like object from a bounded buffer, constructs
                       a temporary object, invokes a callback on success, and cleans up under SEH.
                       No exact class evidence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162b7a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_2c = 0xf;
  Login_GameServerData_ref_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  local_20 = param_1;
  local_18 = param_1;
  local_14 = param_1 + param_2;
  local_1c = param_2;
  local_4 = 0;
  local_10 = '\0';
  local_f = 0;
  FUN_00fa6ec0(&local_20);
  if (local_10 == '\0') {
    (*param_3)(&local_2c);
  }
  local_4 = 0xffffffff;
  LOCK();
  iVar1 = local_28[1] + -1;
  local_28[1] = iVar1;
  UNLOCK();
  if (iVar1 == 0) {
    (**(code **)(*local_28 + 4))();
  }
  ExceptionList = local_c;
  return;
}

