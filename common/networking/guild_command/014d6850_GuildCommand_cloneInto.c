// addr: 0x014d6850
// name: GuildCommand_cloneInto
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_cloneInto(void * param_1, void * param_2) */

void __thiscall GuildCommand_cloneInto(void *this,void *param_1,void *param_2)

{
  int iVar1;
  
                    /* Copies base GuildCommand state into an existing NetworkCommand-derived clone
                       target. RTTI casts the target to GuildCommand after invoking the
                       NetworkCommand clone-copy helper, then copies the account/id field at +4. */
  NetworkCommand_cloneBaseFields(param_1);
  iVar1 = FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &GuildCommand::RTTI_Type_Descriptor,0);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 4);
  return;
}

