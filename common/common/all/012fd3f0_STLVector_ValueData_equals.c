// addr: 0x012fd3f0
// name: STLVector_ValueData_equals
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLVector_ValueData_equals(void * this, void * otherVector) */

bool __cdecl STLVector_ValueData_equals(void *this,void *otherVector)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
                    /* Compares two vectors of 0x1c-byte ValueData-like elements for equal length
                       and equal contents. It guards iterator ranges then calls the ValueData
                       element comparison helper. */
  if (*(int *)((int)this + 4) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
  }
  uVar1 = *(uint *)((int)otherVector + 4);
  if (uVar1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)(*(int *)((int)otherVector + 8) - uVar1) / 0x1c;
  }
  if (iVar6 == iVar5) {
    if (*(uint *)((int)otherVector + 8) < uVar1) {
      FUN_00d83c2d();
    }
    uVar2 = *(uint *)((int)this + 8);
    if (uVar2 < *(uint *)((int)this + 4)) {
      FUN_00d83c2d();
    }
    uVar3 = *(uint *)((int)this + 4);
    if (*(uint *)((int)this + 8) < uVar3) {
      FUN_00d83c2d();
    }
    this = (void *)((uint)this & 0xffffff00);
    cVar4 = FUN_012fcd40(uVar3,uVar2,otherVector,uVar1,this,this);
    if (cVar4 != '\0') {
      return true;
    }
  }
  return false;
}

