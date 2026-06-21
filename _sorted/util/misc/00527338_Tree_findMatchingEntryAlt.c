// addr: 0x00527338
// name: Tree_findMatchingEntryAlt
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 Tree_findMatchingEntryAlt(void * this, int * result, int key_, int
   allowEqual_) */

uint __thiscall Tree_findMatchingEntryAlt(void *this,int *result,int key_,int allowEqual_)

{
  char cVar1;
  uint in_EAX;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Alternate tree/container search that updates a two-word result when
                       comparator logic finds a matching node and clears/release the result on
                       failure. Evidence mirrors 0051e5f4 but starts from fields at +8/+0xc. */
  if ((*(int *)((int)this + 0xc) != 0) &&
     (in_EAX = FUN_004fa28c(result,key_,allowEqual_,this), (char)in_EAX != '\0')) {
    if (key_ == 0) {
      FUN_004d03fd(**(undefined4 **)((int)this + 8),(int)this + 4);
      iVar3 = *result;
      *(undefined4 *)(iVar3 + 4) = local_14;
LAB_00527389:
      *(undefined4 *)(iVar3 + 8) = local_10;
      return CONCAT31((int3)((uint)local_10 >> 8),1);
    }
    FUN_004d03fd(**(undefined4 **)((int)this + 8),(int)this + 4);
    local_c = local_14;
    uVar2 = *(undefined4 *)((int)this + 8);
    local_8 = local_10;
    while( true ) {
      FUN_004d03fd(uVar2,(int)this + 4);
      in_EAX = FUN_004ce74f(&local_14);
      if ((char)in_EAX != '\0') break;
      FUN_004decef();
      if ((char)allowEqual_ == '\0') {
        FUN_004d9111();
        uVar2 = FUN_004da36f();
        FUN_004cd09c(uVar2);
        uVar2 = extraout_ECX_00;
        FUN_004cd09c(key_);
      }
      else {
        uVar2 = FUN_004da36f();
        FUN_004cd09c(uVar2);
        uVar2 = extraout_ECX;
        FUN_004cd09c(key_);
      }
      cVar1 = FUN_00501918(uVar2);
      if (cVar1 != '\0') {
        iVar3 = *result;
        *(undefined4 *)(iVar3 + 4) = local_c;
        local_10 = local_8;
        goto LAB_00527389;
      }
      FUN_004e0838();
      uVar2 = *(undefined4 *)((int)this + 8);
    }
    if ((int *)result[1] != (int *)0x0) {
      in_EAX = (**(code **)(*(int *)result[1] + 8))(result);
    }
    *result = 0;
    result[1] = 0;
  }
  return in_EAX & 0xffffff00;
}

