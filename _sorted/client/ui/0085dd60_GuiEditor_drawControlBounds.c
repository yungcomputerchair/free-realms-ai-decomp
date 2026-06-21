// addr: 0x0085dd60
// name: GuiEditor_drawControlBounds
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuiEditor_drawControlBounds(void) */

void GuiEditor_drawControlBounds(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Iterates UI GObjects and draws rectangles around GuiWindowCtrl and
                       GuiFlashCtrl objects, scaling by a global UI scale. This appears to be
                       editor/debug visualization of control bounds. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01573200;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GObjectIterator_ctorForOwner
            ((void *)(in_ECX + 0x24),local_20,(void *)0x1,DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  local_4 = 0;
  cVar1 = FUN_00412138();
  do {
    if (cVar1 == '\0') {
      local_4 = 0xffffffff;
      FUN_00404861();
      ExceptionList = local_c;
      return;
    }
    iVar2 = FUN_00407b86();
    if (iVar2 != 0) {
      iVar3 = FUN_00d8d382(iVar2,0,&GCtrl::RTTI_Type_Descriptor,&GuiWindowCtrl::RTTI_Type_Descriptor
                           ,0);
      if (iVar3 == 0) {
        iVar2 = FUN_00d8d382(iVar2,0,&GCtrl::RTTI_Type_Descriptor,
                             &GuiFlashCtrl::RTTI_Type_Descriptor,0);
        if (iVar2 == 0) goto LAB_0085de60;
        fVar4 = *(float *)(DAT_01be1090 + 0xddb4);
        fVar6 = *(float *)(iVar2 + 0xec) * fVar4;
        fVar5 = *(float *)(iVar2 + 0xf0);
      }
      else {
        fVar4 = *(float *)(DAT_01be1090 + 0xddb4);
        fVar6 = *(float *)(iVar3 + 0x1a4) * fVar4;
        fVar5 = *(float *)(iVar3 + 0x1a8);
      }
      FUN_004072e2(0,0,(int)(fVar5 * fVar4),(int)fVar6,5);
    }
LAB_0085de60:
    FUN_00412144();
    cVar1 = FUN_00412138();
  } while( true );
}

