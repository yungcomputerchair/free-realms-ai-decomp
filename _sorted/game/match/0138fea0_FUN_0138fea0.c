// addr: 0x0138fea0
// name: FUN_0138fea0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void clearVirtualResultVector(void * thisObj, int mode_) */

void __thiscall clearVirtualResultVector(void *this,void *thisObj,int mode_)

{
  uint *puVar1;
  rsize_t _DstSize;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  void *pvVar5;
  void *_Dst;
  int iVar6;
  int *piVar7;
  int iStack_4;
  
  pvVar5 = thisObj;
                    /* Builds a virtual result vector via method +0x214 and clears it; if mode is
                       0xdc it just clears the vector, otherwise it also transforms and deletes each
                       pointed item. */
  (**(code **)(*(int *)this + 0x214))(thisObj,&thisObj);
  if (pvVar5 == (void *)0xdc) {
    uVar2 = *(uint *)(iStack_4 + 8);
    if (uVar2 < *(uint *)(iStack_4 + 4)) {
      FUN_00d83c2d();
    }
    uVar3 = *(uint *)(iStack_4 + 4);
    if (*(uint *)(iStack_4 + 8) < uVar3) {
      FUN_00d83c2d();
    }
    FUN_0138ed50(&stack0xfffffff0,iStack_4,uVar3,iStack_4,uVar2);
    return;
  }
  piVar4 = *(int **)(iStack_4 + 8);
  if (piVar4 < *(int **)(iStack_4 + 4)) {
    FUN_00d83c2d();
  }
  piVar7 = *(int **)(iStack_4 + 4);
  if (*(int **)(iStack_4 + 8) < piVar7) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (iStack_4 == 0) {
      FUN_00d83c2d();
    }
    if (piVar7 == piVar4) break;
    if (iStack_4 == 0) {
      FUN_00d83c2d();
    }
    if (*(int **)(iStack_4 + 8) <= piVar7) {
      FUN_00d83c2d();
    }
    AttributeModifier_resetState();
    if (*(int **)(iStack_4 + 8) <= piVar7) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar7)(1);
    }
    if (*(int **)(iStack_4 + 8) <= piVar7) {
      FUN_00d83c2d();
    }
    piVar7 = piVar7 + 1;
  }
  pvVar5 = *(void **)(iStack_4 + 8);
  puVar1 = (uint *)(iStack_4 + 8);
  if (pvVar5 < *(void **)(iStack_4 + 4)) {
    FUN_00d83c2d();
  }
  _Dst = *(void **)(iStack_4 + 4);
  if ((void *)*puVar1 < _Dst) {
    FUN_00d83c2d();
  }
  if (_Dst != pvVar5) {
    iVar6 = (int)(*puVar1 - (int)pvVar5) >> 2;
    _DstSize = iVar6 * 4;
    if (0 < iVar6) {
      _memmove_s(_Dst,_DstSize,pvVar5,_DstSize);
    }
    *puVar1 = (uint)(_DstSize + (int)_Dst);
  }
  return;
}

