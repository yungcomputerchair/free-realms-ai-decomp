// addr: 0x014c5c10
// name: LobbyCommand_ConfigureGroup_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandConfigureGroup.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ConfigureGroup_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_ConfigureGroup_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_ConfigureGroup into a target command, copying a
                       referenced member at offset 8 and a scalar at 0xc. The RTTI cast and clone
                       assertion in LobbyCommandConfigureGroup.cpp identify the class and operation.
                        */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_ConfigureGroup::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandConfigureGroup.cpp",
                 0x7d);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  PropertySet_copyPropertiesFrom(*(int *)((int)this + 8));
  *(undefined4 *)((int)thisObj + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}

