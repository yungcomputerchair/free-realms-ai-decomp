// addr: 0x00864a00
// name: GuiObject_destroyOwnedChildrenOfType
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x00864a9e) */
/* WARNING: Removing unreachable block (ram,0x00864aa2) */
/* WARNING: Removing unreachable block (ram,0x00864aa8) */
/* WARNING: Removing unreachable block (ram,0x00864ac1) */
/* WARNING: Removing unreachable block (ram,0x00864acb) */
/* WARNING: Removing unreachable block (ram,0x00864ad2) */
/* Setting prototype: void GuiObject_destroyOwnedChildrenOfType(void * owner, void * type) */

void __cdecl GuiObject_destroyOwnedChildrenOfType(void *owner,void *type)

{
  char cVar1;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Iterates owned GObjects with GObjectIterator and removes/destroys matching
                       children through GUI object helpers. Evidence is GObjectIterator_ctorForOwner
                       and repeated object lookup/remove calls. */
  puStack_8 = &LAB_01573c58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  GObjectIterator_ctorForOwner
            ((void *)((int)owner + 0x24),local_20,(void *)0x1,DAT_01b839d8 ^ (uint)&stack0xffffffc4)
  ;
  local_4 = CONCAT31(local_4._1_3_,1);
  cVar1 = FUN_00412138();
  while (cVar1 != '\0') {
    owner = (void *)FUN_00407b86();
    FUN_00824b00(&owner);
    FUN_00412144();
    cVar1 = FUN_00412138();
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00404861();
  local_4 = 0xffffffff;
  FUN_0082bc80();
  ExceptionList = local_c;
  return;
}

