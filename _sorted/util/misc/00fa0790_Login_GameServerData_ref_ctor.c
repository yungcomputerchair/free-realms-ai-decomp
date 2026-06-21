// addr: 0x00fa0790
// name: Login_GameServerData_ref_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Login_GameServerData_ref_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a small holder for a Login_GameServerData object, clears its flag
                       byte, allocates 0x11ac bytes, constructs Login_GameServerData, and stores the
                       pointer or null. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162af2b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 1) = 0;
  pvVar2 = Mem_Alloc(0x11ac);
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar3 = Login_GameServerData_ctor(uVar1);
    *param_1 = uVar3;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = 0;
  ExceptionList = local_c;
  return param_1;
}

