// addr: 0x010c2ad0
// name: FUN_010c2ad0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_010c2ad0(int id_) */

void FUN_010c2ad0(int id_)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *local_4;
  
                    /* If a subsystem is active, looks up a resource by id and inserts/AddRefs it
                       into a global map if not already present. Exact resource type is unknown. */
  iVar1 = FUN_00769b30();
  iVar3 = id_;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_007dd650(id_);
    if (piVar2 != (int *)0x0) {
      id_ = iVar3;
      local_4 = piVar2;
      iVar3 = FUN_00c501e0(&id_);
      if (iVar3 == 0) {
        FUN_00c53760(&id_,&local_4);
        iVar3 = piVar2[2];
        piVar2[2] = iVar3 + 1;
        if (iVar3 == 0) {
          (**(code **)(*piVar2 + 0x24))();
        }
      }
    }
  }
  return;
}

