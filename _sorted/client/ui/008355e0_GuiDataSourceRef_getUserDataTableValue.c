// addr: 0x008355e0
// name: GuiDataSourceRef_getUserDataTableValue
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GuiDataSourceRef_getUserDataTableValue(void * this) */

int __fastcall GuiDataSourceRef_getUserDataTableValue(void *this)

{
  int *piVar1;
  int iVar2;
  
                    /* If this object holds a data source at +0x18, casts it to GuiUserDataTable and
                       dispatches vfunc +0x10; otherwise returns 0. The wrapper class is not known.
                        */
  if (*(int *)((int)this + 0x18) != 0) {
    piVar1 = (int *)FUN_00d8d382(*(int *)((int)this + 0x18),0,&GuiDataSource::RTTI_Type_Descriptor,
                                 &GuiUserDataTable::RTTI_Type_Descriptor,0);
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00835609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(*piVar1 + 0x10))();
      return iVar2;
    }
  }
  return 0;
}

