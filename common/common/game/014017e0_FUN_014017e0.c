// addr: 0x014017e0
// name: FUN_014017e0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void sub_014017e0(void * unused, void * object) */

void __cdecl sub_014017e0(void *unused,void *object)

{
                    /* Small destructor/cleanup thunk that forwards its second argument to
                       FUN_0135d6e0. */
  Game_deserializeIntPairVector_0135d6e0(&unused,object);
  return;
}

