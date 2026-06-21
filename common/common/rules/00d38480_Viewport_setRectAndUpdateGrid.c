// addr: 0x00d38480
// name: Viewport_setRectAndUpdateGrid
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Viewport_setRectAndUpdateGrid(void * this, int * rect) */

void __thiscall Viewport_setRectAndUpdateGrid(void *this,int *rect)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
                    /* Stores a rectangle, converts its coordinates by a scale value, caches grid
                       indices at offsets 0x34/0x38, and refreshes when the indices change. */
  *(int *)((int)this + 0x20) = *rect;
  *(int *)((int)this + 0x24) = rect[1];
  *(int *)((int)this + 0x28) = rect[2];
  *(int *)((int)this + 0x2c) = rect[3];
  fVar1 = 1.0 / *(float *)(*(int *)((int)this + 0x10) + 0xc4df8);
  CRT_floor((double)(fVar1 * *(float *)((int)this + 0x28)));
  iVar2 = FUN_00d83c90();
  CRT_floor((double)(*(float *)((int)this + 0x20) * fVar1));
  iVar3 = FUN_00d83c90();
  if ((iVar2 != *(int *)((int)this + 0x34)) || (iVar3 != *(int *)((int)this + 0x38))) {
    *(int *)((int)this + 0x34) = iVar2;
    *(int *)((int)this + 0x38) = iVar3;
    unknown_visibilityScore_update(this);
  }
  return;
}

