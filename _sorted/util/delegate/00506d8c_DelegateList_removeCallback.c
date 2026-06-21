// addr: 0x00506d8c
// name: DelegateList_removeCallback
// subsystem: common/util/delegate
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DelegateList_removeCallback(int this_, int * callbackRecord) */

bool __thiscall DelegateList_removeCallback(void *this,int this_,int *callbackRecord)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Searches the delegate vector for a 32-byte callback record matching
                       target/function fields and erases the first match if present. Returns true
                       regardless of whether a matching record was found. */
  iVar1 = (int)this + 4;
  FUN_00416fad(*(undefined4 *)((int)this + 8),iVar1);
  local_c = local_14;
  local_8 = local_10;
  FUN_00416fad(*(undefined4 *)((int)this + 0xc),iVar1);
  cVar2 = FUN_004cef4d(&local_14);
  while( true ) {
    if (cVar2 != '\0') {
      return true;
    }
    piVar3 = (int *)FUN_004ce147();
    if (((((piVar3[2] == *(int *)(this_ + 8)) && (*piVar3 == *(int *)this_)) &&
         (piVar3[1] == *(int *)(this_ + 4))) && (piVar3[4] == *(int *)(this_ + 0x10))) &&
       ((piVar3[4] == 0 ||
        (((piVar3[5] == *(int *)(this_ + 0x14) && (piVar3[6] == *(int *)(this_ + 0x18))) &&
         (piVar3[7] == *(int *)(this_ + 0x1c))))))) break;
    FUN_004cef29();
    FUN_00416fad(*(undefined4 *)((int)this + 0xc),iVar1);
    cVar2 = FUN_004cef4d(&local_14);
  }
  FUN_00505b28(&local_14,local_c,local_8);
  return true;
}

