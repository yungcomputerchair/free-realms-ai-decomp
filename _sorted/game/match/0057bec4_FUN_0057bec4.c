// addr: 0x0057bec4
// name: FUN_0057bec4
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void unknown_containerOwner_dtor(void * this) */

void __fastcall unknown_containerOwner_dtor(void *this)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Destructor-like cleanup for an object with vtable PTR_FUN_0178119c; deletes
                       all pointer elements in an internal container, clears it, calls helper
                       00579599, and restores base vtable. */
  *(undefined ***)this = &PTR_FUN_0178119c;
  FUN_00553b5b(*(undefined4 *)((int)this + 8),(int)this + 4);
  local_c = local_14;
  uVar3 = *(undefined4 *)((int)this + 0xc);
  local_8 = local_10;
  while( true ) {
    FUN_00553b5b(uVar3,(int)this + 4);
    cVar1 = FUN_005533b5(&local_14);
    if (cVar1 != '\0') break;
    piVar2 = (int *)FUN_00553394();
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    FUN_00553b8b();
    uVar3 = *(undefined4 *)((int)this + 0xc);
  }
  FUN_00579599();
  *(undefined ***)this = &PTR_LAB_01778a44;
  return;
}

