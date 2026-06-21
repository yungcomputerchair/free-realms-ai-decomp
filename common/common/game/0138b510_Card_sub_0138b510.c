// addr: 0x0138b510
// name: Card_sub_0138b510
// subsystem: common/common/game
// source (binary assert): common/common/game/Card.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Card_sub_0138b510(void * this) */

void __fastcall Card_sub_0138b510(void *this)

{
  int *piVar1;
  
                    /* Forwards to a virtual method on the Card field at offset 0x64 after asserting
                       that field is present. The target object and operation are not identified. */
  piVar1 = *(int **)((int)this + 100);
  if (piVar1 == (int *)0x0) {
    FUN_012f5a60(&DAT_018d49c8,"..\\common\\common\\game\\Card.cpp",0x116a);
  }
                    /* WARNING: Could not recover jumptable at 0x0138b537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x54))();
  return;
}

