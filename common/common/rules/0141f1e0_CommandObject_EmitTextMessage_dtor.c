// addr: 0x0141f1e0
// name: CommandObject_EmitTextMessage_dtor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall CommandObject_EmitTextMessage_dtor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destroys a CommandObject_EmitTextMessage including base CommandObject cleanup
                       and MessageText payload. */
  puStack_8 = &LAB_016942b4;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = CommandObject_EmitTextMessage::vftable;
  param_1[2] = CommandObject_EmitTextMessage::vftable;
  local_4 = 1;
  FUN_012ce9d0(uVar1);
  local_4 = local_4 & 0xffffff00;
  if (0xf < (uint)param_1[0x4f]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x4a]);
  }
  param_1[0x4f] = 0xf;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  local_4 = 0xffffffff;
  CommandObject_dtor(param_1);
  ExceptionList = local_c;
  return;
}

