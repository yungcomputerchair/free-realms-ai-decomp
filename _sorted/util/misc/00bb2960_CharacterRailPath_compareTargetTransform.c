// addr: 0x00bb2960
// name: CharacterRailPath_compareTargetTransform
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CharacterRailPath_compareTargetTransform(void * this, void * target,
   float * transform4) */

bool __thiscall CharacterRailPath_compareTargetTransform(void *this,void *target,float *transform4)

{
  int iVar1;
  void *this_00;
  char cVar2;
  int iVar3;
  int iVar4;
  int *_Memory;
  int *_Memory_00;
  uint unaff_EDI;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
                    /* Walks linked rail/path entries matching a target id, resolves two resources,
                       checks both are valid, computes a transform from the input, and compares
                       squared component deltas. */
  iVar1 = *(int *)((int)this + 8);
  do {
    if (iVar1 == 0) {
      return false;
    }
    if (*(int *)(iVar1 + 4) == *(int *)((int)target + 0x194)) {
      this_00 = *(void **)((int)target + 0x224);
      iVar3 = lookup_hash64_bucket_node(this_00,*(int *)(iVar1 + 0xc),unaff_EDI);
      iVar4 = lookup_hash64_bucket_node(this_00,*(int *)(iVar1 + 8),unaff_EDI);
      if ((iVar3 != 0) && (iVar4 != 0)) {
        _Memory = (int *)FUN_010718e0();
        _Memory_00 = (int *)FUN_010718e0();
        if (_Memory != (int *)0x0) {
          if ((((_Memory_00 != (int *)0x0) && ((int *)*_Memory != (int *)0x0)) &&
              (cVar2 = (**(code **)(*(int *)*_Memory + 0x34))(), cVar2 != '\0')) &&
             (((int *)*_Memory_00 != (int *)0x0 &&
              (cVar2 = (**(code **)(*(int *)*_Memory_00 + 0x34))(), cVar2 != '\0')))) {
            fVar5 = (float10)FUN_00ae9800(transform4);
            FUN_00ae9940(&fStack_30,(float)fVar5);
            fVar6 = (fStack_30 - *transform4) * (fStack_30 - *transform4);
            fVar7 = (fStack_2c - transform4[1]) * (fStack_2c - transform4[1]);
            fVar8 = (fStack_28 - transform4[2]) * (fStack_28 - transform4[2]);
            fVar9 = (fStack_24 - transform4[3]) * (fStack_24 - transform4[3]);
            fStack_14 = fVar7 + fVar6;
            fStack_18 = fVar9 + fVar8;
            fStack_20 = fStack_18 + fStack_14;
            fStack_1c = fStack_18 + fVar6 + fVar7;
            fStack_18 = fStack_14 + fStack_18;
            fStack_14 = fStack_14 + fVar8 + fVar9;
          }
          FUN_007d69e0();
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        if (_Memory_00 != (int *)0x0) {
          FUN_007d69e0();
                    /* WARNING: Subroutine does not return */
          _free(_Memory_00);
        }
      }
    }
    iVar1 = *(int *)(iVar1 + 0x30);
  } while( true );
}

