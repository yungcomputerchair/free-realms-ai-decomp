// addr: 0x014b9350
// name: LoginCommand_ForgotPasswordResults_cloneInto
// subsystem: common/networking/login_command
// source (binary assert): common/networking/login_command/LoginCommandForgotPasswordResults.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_ForgotPasswordResults_cloneInto(void * this, void *
   loginCommand) */

void __thiscall LoginCommand_ForgotPasswordResults_cloneInto(void *this,void *loginCommand)

{
  void *this_00;
  
                    /* Copies a ForgotPasswordResults command into an existing NetworkCommand after
                       RTTI-checking it as LoginCommand_ForgotPasswordResults. Evidence is the class
                       RTTI and LoginCommandForgotPasswordResults.cpp loginCommand assert. */
  this_00 = (void *)FUN_00d8d382(loginCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LoginCommand_ForgotPasswordResults::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("loginCommand",
                 "..\\common\\networking\\login_command\\LoginCommandForgotPasswordResults.cpp",0x4f
                );
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined1 *)((int)this_00 + 4) = *(undefined1 *)((int)this + 4);
  *(undefined4 *)((int)this_00 + 8) = *(undefined4 *)((int)this + 8);
  return;
}

