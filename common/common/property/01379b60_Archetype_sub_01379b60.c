// addr: 0x01379b60
// name: Archetype_sub_01379b60
// subsystem: common/common/property
// source (binary assert): common/common/property/Archetype.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Archetype_sub_01379b60(void * this) */

void __fastcall Archetype_sub_01379b60(void *this)

{
  int iVar1;
  
                    /* Resolves the defining/format-data object through Archetype virtual slot 0x38,
                       asserts it exists, then tail-calls the object's secondary-vtable slot 0x04.
                       It is a sibling wrapper to Archetype_sub_01379b20 but the precise operation
                       is not named by strings. */
  iVar1 = (**(code **)(*(int *)this + 0x38))();
  if (iVar1 == 0) {
    FUN_012f5a60(&DAT_018dd0b8,"..\\common\\common\\property\\Archetype.cpp",0x468);
  }
                    /* WARNING: Could not recover jumptable at 0x01379b8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + 4) + 4))();
  return;
}

