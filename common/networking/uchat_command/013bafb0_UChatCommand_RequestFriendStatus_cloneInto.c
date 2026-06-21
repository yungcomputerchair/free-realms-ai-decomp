// addr: 0x013bafb0
// name: UChatCommand_RequestFriendStatus_cloneInto
// subsystem: common/networking/uchat_command
// source (binary assert): common/networking/uchat_command/UChatCommandRequestFriendStatus.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_RequestFriendStatus_cloneInto(void * this, void *
   uchatCommand) */

void __thiscall UChatCommand_RequestFriendStatus_cloneInto(void *this,void *uchatCommand)

{
  void *uchatCommand_00;
  void *unaff_EDI;
  
                    /* Copies a RequestFriendStatus command into an existing destination, including
                       the inherited UChatCommand fields and the int-vector payload at offset 0x44.
                        */
  uchatCommand_00 =
       (void *)FUN_00d8d382(uchatCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                            &UChatCommand_RequestFriendStatus::RTTI_Type_Descriptor,0);
  if (uchatCommand_00 == (void *)0x0) {
    FUN_012f5a60("uchatCommand",
                 "..\\common\\networking\\uchat_command\\UChatCommandRequestFriendStatus.cpp",0x4b);
  }
  UChatCommand_cloneInto(this,uchatCommand_00);
  UChatCommand_RequestFriendStatus_assignStatusVector
            ((void *)((int)uchatCommand_00 + 0x44),(void *)((int)this + 0x44),unaff_EDI);
  return;
}

