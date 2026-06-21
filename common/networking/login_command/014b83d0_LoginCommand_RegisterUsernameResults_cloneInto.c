// addr: 0x014b83d0
// name: LoginCommand_RegisterUsernameResults_cloneInto
// subsystem: common/networking/login_command
// source (binary assert): common/networking/login_command/LoginCommandRegisterUsernameResults.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RegisterUsernameResults_cloneInto(void * this, void *
   loginCommand) */

void __thiscall LoginCommand_RegisterUsernameResults_cloneInto(void *this,void *loginCommand)

{
  void *this_00;
  
                    /* Copies a RegisterUsernameResults command into an existing NetworkCommand
                       after RTTI-checking it as LoginCommand_RegisterUsernameResults. Evidence is
                       the RTTI_Type_Descriptor and assert file
                       LoginCommandRegisterUsernameResults.cpp with loginCommand assertion. */
  this_00 = (void *)FUN_00d8d382(loginCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LoginCommand_RegisterUsernameResults::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("loginCommand",
                 "..\\common\\networking\\login_command\\LoginCommandRegisterUsernameResults.cpp",
                 0x4f);
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined1 *)((int)this_00 + 4) = *(undefined1 *)((int)this + 4);
  *(undefined4 *)((int)this_00 + 8) = *(undefined4 *)((int)this + 8);
  return;
}

