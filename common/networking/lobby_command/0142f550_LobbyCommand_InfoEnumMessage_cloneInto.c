// addr: 0x0142f550
// name: LobbyCommand_InfoEnumMessage_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandInfoEnumMessage.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_InfoEnumMessage_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_InfoEnumMessage_cloneInto(void *this,int param_1,int param_2)

{
  void *pvVar1;
  void *thisObj;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Copies a LobbyCommand_InfoEnumMessage into a target command, allocating
                       target container members when the source has them. Evidence is the RTTI cast
                       to LobbyCommand_InfoEnumMessage and the 'clone' assert in
                       LobbyCommandInfoEnumMessage.cpp. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01696156;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_InfoEnumMessage::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandInfoEnumMessage.cpp",
                 100);
  }
  LobbyCommand_cloneInto(this,thisObj,pvVar1);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 0xc) != 0) {
    if (*(int *)((int)thisObj + 0xc) == 0) {
      pvVar1 = Mem_Alloc(0xc);
      uStack_4 = 0;
      if (pvVar1 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_012fa910();
      }
      uStack_4 = 0xffffffff;
      *(undefined4 *)((int)thisObj + 0xc) = uVar2;
    }
    FUN_013010e0(*(undefined4 *)((int)this + 0xc));
  }
  if (*(int *)((int)this + 0x10) != 0) {
    if (*(int *)((int)thisObj + 0x10) == 0) {
      pvVar1 = Mem_Alloc(0xc);
      uStack_4 = 1;
      if (pvVar1 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_012fa910();
      }
      uStack_4 = 0xffffffff;
      *(undefined4 *)((int)thisObj + 0x10) = uVar2;
    }
    FUN_013010e0(*(undefined4 *)((int)this + 0x10));
  }
  ExceptionList = local_c;
  return;
}

