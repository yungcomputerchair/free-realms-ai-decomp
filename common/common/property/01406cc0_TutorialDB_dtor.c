// addr: 0x01406cc0
// name: TutorialDB_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TutorialDB_dtor(void * this) */

void __fastcall TutorialDB_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Non-deleting destructor for TutorialDB; it restores the TutorialDB vtable,
                       destroys the ruleset/container member, frees the small-string buffer when
                       non-SBO, and resets string length/capacity. */
  puStack_8 = &LAB_016915a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = TutorialDB::vftable;
  local_4 = 1;
  TutorialDB_releaseResources(this,0);
  local_4 = local_4 & 0xffffff00;
  if (0xf < *(uint *)((int)this + 0x34)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x20));
  }
  *(undefined4 *)((int)this + 0x34) = 0xf;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  local_4 = 0xffffffff;
  RuleSetIndexMap_clear((int)this + 8);
  ExceptionList = puStack_8;
  return;
}

