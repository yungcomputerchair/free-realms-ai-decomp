// addr: 0x01529490
// name: UChatCommand_OnReceiveFriendConfirmResponse_cloneInto
// subsystem: common/networking/uchat_command
// source (binary assert): common/networking/uchat_command/UChatCommandOnReceiveFriendConfirmResponse.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_OnReceiveFriendConfirmResponse_cloneInto(void * this, void *
   uchatCommand) */

void __thiscall UChatCommand_OnReceiveFriendConfirmResponse_cloneInto(void *this,void *uchatCommand)

{
  void *uchatCommand_00;
  
                    /* Copies this response into an existing command object after RTTI-checking it
                       as UChatCommand_OnReceiveFriendConfirmResponse; delegates common UChatCommand
                       fields and copies the byte at 0x44. */
  uchatCommand_00 =
       (void *)FUN_00d8d382(uchatCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                            &UChatCommand_OnReceiveFriendConfirmResponse::RTTI_Type_Descriptor,0);
  if (uchatCommand_00 == (void *)0x0) {
    FUN_012f5a60("uchatCommand",
                 "..\\common\\networking\\uchat_command\\UChatCommandOnReceiveFriendConfirmResponse.cpp"
                 ,0x34);
  }
  UChatCommand_cloneInto(this,uchatCommand_00);
  *(undefined1 *)((int)uchatCommand_00 + 0x44) = *(undefined1 *)((int)this + 0x44);
  return;
}

