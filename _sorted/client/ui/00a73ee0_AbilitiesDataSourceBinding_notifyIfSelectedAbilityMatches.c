// addr: 0x00a73ee0
// name: AbilitiesDataSourceBinding_notifyIfSelectedAbilityMatches
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AbilitiesDataSourceBinding_notifyIfSelectedAbilityMatches(void * this) */

void __fastcall AbilitiesDataSourceBinding_notifyIfSelectedAbilityMatches(void *this)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
                    /* Casts the bound data source to AbilitiesDataSource and, if its
                       selected/current ability id at +0x300 matches this+0x20, marks a local flag
                       and dispatches a virtual notify. Wrapper class is unknown. */
  iVar1 = FUN_00d8d382(*(undefined4 *)((int)this + 0x18),0,&GuiDataSource::RTTI_Type_Descriptor,
                       &AbilitiesDataSource::RTTI_Type_Descriptor,0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x300) == *(int *)((int)this + 0x20))) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)((int)this + -0x254) + 0x10);
    *(undefined1 *)((int)this + 0x1c) = 1;
                    /* WARNING: Could not recover jumptable at 0x00a73f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

