// addr: 0x014e6c70
// name: ArchCommand_AddArchetypesToDB_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchCommand_AddArchetypesToDB_dtor(void * this) */

void __fastcall ArchCommand_AddArchetypesToDB_dtor(void *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destroys ArchCommand_AddArchetypesToDB, freeing its vector of
                       archetype/string data before base destruction. */
  puStack_8 = &LAB_016b0143;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  *(undefined ***)this = ArchCommand_AddArchetypesToDB::vftable;
  local_4 = 1;
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 < *(uint *)((int)this + 0xc)) {
    FUN_00d83c2d(uVar3);
  }
  uVar2 = *(uint *)((int)this + 0xc);
  if (*(uint *)((int)this + 0x10) < uVar2) {
    FUN_00d83c2d(uVar3);
  }
  FUN_012a9f10(local_14,(int)this + 8,uVar2,(int)this + 8,uVar1);
  local_4 = local_4 & 0xffffff00;
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0xc),*(void **)((int)this + 0x10));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0xffffffff;
  ArchCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

