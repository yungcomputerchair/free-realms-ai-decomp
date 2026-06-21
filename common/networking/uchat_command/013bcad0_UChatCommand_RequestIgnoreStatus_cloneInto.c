// addr: 0x013bcad0
// name: UChatCommand_RequestIgnoreStatus_cloneInto
// subsystem: common/networking/uchat_command
// source (binary assert): common/networking/uchat_command/UChatCommandRequestIgnoreStatus.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_RequestIgnoreStatus_cloneInto(void * this, void *
   uchatCommand) */

void __thiscall UChatCommand_RequestIgnoreStatus_cloneInto(void *this,void *uchatCommand)

{
  void *uchatCommand_00;
  void *unaff_EDI;
  
                    /* Copies a RequestIgnoreStatus command into an existing destination, including
                       inherited UChatCommand fields and the int-vector payload at offset 0x44. */
  uchatCommand_00 =
       (void *)FUN_00d8d382(uchatCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                            &UChatCommand_RequestIgnoreStatus::RTTI_Type_Descriptor,0);
  if (uchatCommand_00 == (void *)0x0) {
    FUN_012f5a60("uchatCommand",
                 "..\\common\\networking\\uchat_command\\UChatCommandRequestIgnoreStatus.cpp",0x4a);
  }
  UChatCommand_cloneInto(this,uchatCommand_00);
  UChatCommand_RequestIgnoreStatus_assignStatusVector
            ((void *)((int)uchatCommand_00 + 0x44),(void *)((int)this + 0x44),unaff_EDI);
  return;
}

