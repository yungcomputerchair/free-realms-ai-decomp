// addr: 0x01437df0
// name: ContainerSelection_clearItems
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x01437e21) */

void __fastcall ContainerSelection_clearItems(int param_1)

{
  rsize_t _DstSize;
  int *piVar1;
  void *_Src;
  void *_Dst;
  int iVar2;
  int *piVar3;
  
                    /* Destroys each pointer item in a vector range, compacts/resets the vector,
                       clears a string at offset 0x48, and marks a byte flag true. Exact class is
                       inferred as a selection/container object. */
  piVar3 = *(int **)(param_1 + 0x3c);
  if (*(int **)(param_1 + 0x40) < piVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    piVar1 = *(int **)(param_1 + 0x40);
    if (piVar1 < *(int **)(param_1 + 0x3c)) {
      FUN_00d83c2d();
    }
    if (piVar3 == piVar1) break;
    if (*(int **)(param_1 + 0x40) <= piVar3) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    if (*(int **)(param_1 + 0x40) <= piVar3) {
      FUN_00d83c2d();
    }
    piVar3 = piVar3 + 1;
  }
  _Src = *(void **)(param_1 + 0x40);
  if (_Src < *(void **)(param_1 + 0x3c)) {
    FUN_00d83c2d();
  }
  _Dst = *(void **)(param_1 + 0x3c);
  if (*(void **)(param_1 + 0x40) < _Dst) {
    FUN_00d83c2d();
  }
  if (_Dst != _Src) {
    iVar2 = *(int *)(param_1 + 0x40) - (int)_Src >> 2;
    _DstSize = iVar2 * 4;
    if (0 < iVar2) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)(param_1 + 0x40) = (void *)(_DstSize + (int)_Dst);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x48),"",
             0);
  *(undefined1 *)(param_1 + 0x34) = 1;
  return;
}

