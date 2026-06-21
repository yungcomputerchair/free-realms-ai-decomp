// addr: 0x01379ca0
// name: Archetype_sub_01379ca0
// subsystem: common/common/property
// source (binary assert): common/common/property/Archetype.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Archetype_sub_01379ca0(void * this) */

void __fastcall Archetype_sub_01379ca0(void *this)

{
  int iVar1;
  
                    /* Resolves the defining/format-data object via Archetype virtual slot 0x38,
                       asserts it exists, then tail-calls secondary-vtable slot 0x14. Neighbor
                       01379c50 calls the same slot as a presence test when given a value id, but
                       this no-argument wrapper's exact role is unclear. */
  iVar1 = (**(code **)(*(int *)this + 0x38))();
  if (iVar1 == 0) {
    FUN_012f5a60(&DAT_018dd0b8,"..\\common\\common\\property\\Archetype.cpp",0x482);
  }
                    /* WARNING: Could not recover jumptable at 0x01379ccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + 4) + 0x14))();
  return;
}

