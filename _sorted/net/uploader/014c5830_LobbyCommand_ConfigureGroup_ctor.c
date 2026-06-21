// addr: 0x014c5830
// name: LobbyCommand_ConfigureGroup_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall LobbyCommand_ConfigureGroup_ctor(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_ConfigureGroup and initializes its embedded
                       PropertySet. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aac93;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *param_1 = LobbyCommand_ConfigureGroup::vftable;
  pvVar1 = Mem_Alloc(0x10);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = PropertySet_ctor(pvVar1);
  }
  param_1[2] = pvVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_c;
  return param_1;
}

