// addr: 0x0051e5f4
// name: Tree_findMatchingEntry
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 Tree_findMatchingEntry(void * this, int * result, int key_, int
   allowEqual_) */

uint __thiscall Tree_findMatchingEntry(void *this,int *result,int key_,int allowEqual_)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Searches a tree/container for an entry matching param_3 using comparator
                       callbacks, updates the two-word result when found, and clears/release the
                       result on failure. Evidence is repeated ordered traversal, comparator calls,
                       and result object release via vtable+8. */
  iVar2 = FUN_004ce6e9();
  uVar3 = 0;
  if ((iVar2 != 0) && (uVar3 = FUN_0050262b(result,key_,allowEqual_,this), (char)uVar3 != '\0')) {
    FUN_004dfa1a(*(undefined4 *)((int)this + 8),(int)this + 4);
    if (key_ == 0) {
      iVar2 = *result;
      *(undefined4 *)(iVar2 + 4) = local_14;
LAB_0051e648:
      *(undefined4 *)(iVar2 + 8) = local_10;
      return CONCAT31((int3)((uint)local_10 >> 8),1);
    }
    local_c = local_14;
    uVar4 = *(undefined4 *)((int)this + 0xc);
    local_8 = local_10;
    while( true ) {
      FUN_004dfa1a(uVar4,(int)this + 4);
      uVar3 = FUN_004da1e8(&local_14);
      if ((char)uVar3 != '\0') break;
      FUN_004cf311();
      if ((char)allowEqual_ == '\0') {
        FUN_004d9111();
        uVar4 = FUN_004da36f();
        FUN_004cd09c(uVar4);
        uVar4 = extraout_ECX_00;
        FUN_004cd09c(key_);
      }
      else {
        uVar4 = FUN_004da36f();
        FUN_004cd09c(uVar4);
        uVar4 = extraout_ECX;
        FUN_004cd09c(key_);
      }
      cVar1 = FUN_00501918(uVar4);
      if (cVar1 != '\0') {
        iVar2 = *result;
        *(undefined4 *)(iVar2 + 4) = local_c;
        local_10 = local_8;
        goto LAB_0051e648;
      }
      FUN_004da220();
      uVar4 = *(undefined4 *)((int)this + 0xc);
    }
    if ((int *)result[1] != (int *)0x0) {
      uVar3 = (**(code **)(*(int *)result[1] + 8))(result);
    }
    *result = 0;
    result[1] = 0;
  }
  return uVar3 & 0xffffff00;
}

