// addr: 0x01417100
// name: ReturnValueMap_findValueData
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ReturnValueMap_findValueData(void * this, int key_) */

void * __fastcall ReturnValueMap_findValueData(void *this,int key_)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 local_8 [8];
  
                    /* Looks up a key in a return-value/ValueData map and returns a pointer to the
                       value payload, or null when the key is absent. Callers are typed accessors
                       such as integer/boolean return checks and getters. */
  piVar4 = (int *)FUN_01416ef0(local_8,&stack0x00000004);
  uVar1 = *(uint *)((int)this + 0xc);
  iVar2 = *piVar4;
  uVar3 = piVar4[1];
  if (uVar1 < *(uint *)((int)this + 8)) {
    FUN_00d83c2d();
  }
  if ((iVar2 == 0) || (iVar2 != (int)this + 4)) {
    FUN_00d83c2d();
  }
  if (uVar3 != uVar1) {
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (*(uint *)(iVar2 + 8) <= uVar3) {
      FUN_00d83c2d();
    }
    return (void *)(uVar3 + 4);
  }
  return (void *)0x0;
}

