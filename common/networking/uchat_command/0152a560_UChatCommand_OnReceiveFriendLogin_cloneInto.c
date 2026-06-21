// addr: 0x0152a560
// name: UChatCommand_OnReceiveFriendLogin_cloneInto
// subsystem: common/networking/uchat_command
// source (binary assert): common/networking/uchat_command/UChatCommandOnReceiveFriendLogin.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_OnReceiveFriendLogin_cloneInto(void * this, void *
   uchatCommand) */

void __thiscall UChatCommand_OnReceiveFriendLogin_cloneInto(void *this,void *uchatCommand)

{
  void *uchatCommand_00;
  
                    /* Validates the destination command as UChatCommand_OnReceiveFriendLogin and
                       copies inherited UChatCommand fields. */
  uchatCommand_00 =
       (void *)FUN_00d8d382(uchatCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                            &UChatCommand_OnReceiveFriendLogin::RTTI_Type_Descriptor,0);
  if (uchatCommand_00 == (void *)0x0) {
    FUN_012f5a60("uchatCommand",
                 "..\\common\\networking\\uchat_command\\UChatCommandOnReceiveFriendLogin.cpp",0x28)
    ;
  }
  UChatCommand_cloneInto(this,uchatCommand_00);
  return;
}

