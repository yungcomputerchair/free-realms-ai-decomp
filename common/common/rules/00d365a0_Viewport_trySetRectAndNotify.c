// addr: 0x00d365a0
// name: Viewport_trySetRectAndNotify
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: bool Viewport_trySetRectAndNotify(void * this, int * rect) */

bool __thiscall Viewport_trySetRectAndNotify(void *this,int *rect)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  float *unaff_EDI;
  
                    /* Stores a four-int rectangle at this+0x20, validates it when enabled, falls
                       back to a default rectangle on failure, and notifies another object on
                       success. */
  *(int *)((int)this + 0x20) = *rect;
  *(int *)((int)this + 0x24) = rect[1];
  *(int *)((int)this + 0x28) = rect[2];
  *(int *)((int)this + 0x2c) = rect[3];
  if (*(int *)((int)this + 0x1c) != 0) {
    bVar6 = unknown_worldPointInGridBounds(*(void **)((int)this + 0x18),rect,unaff_EDI);
    uVar5 = uRam01cb54fc;
    uVar4 = uRam01cb54f8;
    uVar3 = uRam01cb54f4;
    if (!bVar6) {
      *(int *)((int)this + 0x20) = _DAT_01cb54f0;
      *(undefined4 *)((int)this + 0x24) = uVar3;
      *(undefined4 *)((int)this + 0x28) = uVar4;
      *(undefined4 *)((int)this + 0x2c) = uVar5;
      return false;
    }
    Viewport_setRectAndUpdateGrid(*(void **)((int)this + 0x1c),rect);
    piVar1 = *(int **)(*(int *)((int)this + 0x18) + 0xc7e08);
    piVar1[0x14] = *rect;
    piVar1[0x15] = rect[1];
    piVar1[0x16] = rect[2];
    pcVar2 = *(code **)(*piVar1 + 0x1c);
    piVar1[0x17] = rect[3];
    (*pcVar2)(piVar1 + 8);
  }
  return true;
}

