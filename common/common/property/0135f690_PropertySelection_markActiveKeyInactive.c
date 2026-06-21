// addr: 0x0135f690
// name: PropertySelection_markActiveKeyInactive
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertySelection_markActiveKeyInactive(void * this, int key) */

void __fastcall PropertySelection_markActiveKeyInactive(void *this,int key)

{
  void *this_00;
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_EAX;
  bool *pbVar4;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Looks up the active-key entry in an int-to-bool map and, if currently true,
                       writes false through IntToBoolMap_getOrInsert. Evidence is called near
                       PropertySelection_setActiveKey and the
                       RBTreeInt_lowerBound_flag15/int-to-bool map helpers. */
  if (*(int *)((int)this + 0x244) != 0) {
    this_00 = (void *)((int)this + 600);
    RBTreeInt_lowerBound_flag15(this_00,local_8,&stack0x00000004,unaff_EDI);
    pvVar1 = (void *)*extraout_EAX;
    iVar2 = extraout_EAX[1];
    iVar3 = *(int *)((int)this + 0x25c);
    if ((pvVar1 == (void *)0x0) || (pvVar1 != this_00)) {
      FUN_00d83c2d();
    }
    if (iVar2 != iVar3) {
      if (pvVar1 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (iVar2 == *(int *)((int)pvVar1 + 4)) {
        FUN_00d83c2d();
      }
      if (*(char *)(iVar2 + 0x10) != '\0') {
        pbVar4 = IntToBoolMap_getOrInsert(this_00,&stack0x00000004,unaff_EDI);
        *pbVar4 = false;
      }
    }
  }
  return;
}

