// addr: 0x0138a530
// name: FUN_0138a530
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool is_play_element_in_expected_zone(void * this) */

bool __fastcall is_play_element_in_expected_zone(void *this)

{
  int iVar1;
  int iVar2;
  
                    /* Checks a PlayElement against its game/zone relationship using
                       PlayElement_getGame and zone helpers; exact method name is unclear. */
  if (*(char *)((int)this + 0x69) == '\0') {
    iVar1 = FUN_013402b0();
    if (iVar1 != 0) {
      FUN_013402b0();
      PlayElement_getGame();
      iVar1 = FUN_0139d7c0();
      iVar2 = (**(code **)(*(int *)this + 0x30))();
      if (iVar1 == iVar2) {
        return true;
      }
    }
  }
  return false;
}

