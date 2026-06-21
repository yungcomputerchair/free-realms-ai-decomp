// addr: 0x012da220
// name: FUN_012da220
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyTree21_clearValues(void * tree) */

void __fastcall PropertyTree21_clearValues(void *tree)

{
  rsize_t rVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *pvVar5;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar9;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar10;
  void *local_18;
  undefined4 *local_14;
  undefined4 *local_c;
  
                    /* Clears a PropertyTree21 by freeing string/vector payloads for each node and
                       resetting tree state. */
  puVar3 = *(undefined4 **)((int)tree + 4);
  local_14 = (undefined4 *)*puVar3;
  local_18 = tree;
  while( true ) {
    puVar7 = local_14;
    pvVar4 = local_18;
    if ((local_18 == (void *)0x0) || (local_18 != tree)) {
      FUN_00d83c2d();
    }
    if (puVar7 == puVar3) break;
    if (pvVar4 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar7 == *(undefined4 **)((int)pvVar4 + 4)) {
      FUN_00d83c2d();
    }
    pvVar4 = (void *)puVar7[6];
    if (pvVar4 < (void *)puVar7[5]) {
      FUN_00d83c2d();
    }
    pvVar5 = (void *)puVar7[5];
    if ((void *)puVar7[6] < pvVar5) {
      FUN_00d83c2d();
    }
    if (pvVar5 != pvVar4) {
      iVar8 = puVar7[6] - (int)pvVar4 >> 2;
      rVar1 = iVar8 * 4;
      if (0 < iVar8) {
        _memmove_s(pvVar5,rVar1,pvVar4,rVar1);
      }
      puVar7[6] = (void *)(rVar1 + (int)pvVar5);
    }
    PropertyTreeIterator21_increment((int *)&local_18);
  }
  puVar3 = *(undefined4 **)((int)tree + 0x10);
  local_18 = (void *)((int)tree + 0xc);
  local_14 = (undefined4 *)*puVar3;
  while( true ) {
    puVar7 = local_14;
    pvVar4 = local_18;
    if ((local_18 == (void *)0x0) || (local_18 != (void *)((int)tree + 0xc))) {
      FUN_00d83c2d();
    }
    if (puVar7 == puVar3) break;
    if (pvVar4 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar7 == *(undefined4 **)((int)pvVar4 + 4)) {
      FUN_00d83c2d();
    }
    pvVar4 = (void *)puVar7[6];
    if (pvVar4 < (void *)puVar7[5]) {
      FUN_00d83c2d();
    }
    pvVar5 = (void *)puVar7[5];
    if ((void *)puVar7[6] < pvVar5) {
      FUN_00d83c2d();
    }
    if (pvVar5 != pvVar4) {
      iVar8 = puVar7[6] - (int)pvVar4 >> 2;
      rVar1 = iVar8 * 4;
      if (0 < iVar8) {
        _memmove_s(pvVar5,rVar1,pvVar4,rVar1);
      }
      puVar7[6] = (void *)(rVar1 + (int)pvVar5);
    }
    PropertyTreeIterator21_increment((int *)&local_18);
  }
  local_c = *(undefined4 **)((int)tree + 0x1c);
  local_14 = (undefined4 *)*local_c;
  local_18 = (void *)((int)tree + 0x18);
  while( true ) {
    puVar3 = local_14;
    pvVar4 = local_18;
    if ((local_18 == (void *)0x0) || (local_18 != (void *)((int)tree + 0x18))) {
      FUN_00d83c2d();
    }
    if (puVar3 == local_c) break;
    if (pvVar4 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)((int)pvVar4 + 4)) {
      FUN_00d83c2d();
    }
    pvVar4 = (void *)puVar3[6];
    if (pvVar4 < (void *)puVar3[5]) {
      FUN_00d83c2d();
    }
    pvVar5 = (void *)puVar3[5];
    if ((void *)puVar3[6] < pvVar5) {
      FUN_00d83c2d();
    }
    if (pvVar5 != pvVar4) {
      iVar8 = puVar3[6] - (int)pvVar4 >> 2;
      rVar1 = iVar8 * 4;
      if (0 < iVar8) {
        _memmove_s(pvVar5,rVar1,pvVar4,rVar1);
      }
      puVar3[6] = (void *)(rVar1 + (int)pvVar5);
    }
    PropertyTreeIterator21_increment((int *)&local_18);
  }
  local_c = *(undefined4 **)((int)tree + 0x28);
  local_18 = (void *)((int)tree + 0x24);
  local_14 = (undefined4 *)*local_c;
  while( true ) {
    puVar3 = local_14;
    pvVar4 = local_18;
    if ((local_18 == (void *)0x0) || (local_18 != (void *)((int)tree + 0x24))) {
      FUN_00d83c2d();
    }
    if (puVar3 == local_c) break;
    if (pvVar4 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)((int)pvVar4 + 4)) {
      FUN_00d83c2d();
    }
    pbVar9 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             puVar3[6];
    if (pbVar9 < (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 puVar3[5]) {
      FUN_00d83c2d();
    }
    pbVar10 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              puVar3[5];
    if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)puVar3[6] <
        pbVar10) {
      FUN_00d83c2d();
    }
    if (pbVar10 != pbVar9) {
      pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               puVar3[6];
      pbVar2 = pbVar10 + (((int)pbVar6 - (int)pbVar9) / 0x1c) * 0x1c;
      if (pbVar9 != pbVar6) {
        iVar8 = (int)pbVar10 - (int)pbVar9;
        do {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (pbVar9 + iVar8),pbVar9,0,0xffffffff);
          pbVar9 = pbVar9 + 0x1c;
        } while (pbVar9 != pbVar6);
      }
      pbVar9 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               puVar3[6];
      if (pbVar2 != pbVar9) {
        pbVar10 = pbVar2 + 0x18;
        do {
          if (0xf < *(uint *)pbVar10) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(pbVar10 + -0x14));
          }
          *(uint *)pbVar10 = 0xf;
          *(uint *)(pbVar10 + -4) = 0;
          pbVar10[-0x14] =
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0;
          pbVar6 = pbVar10 + 4;
          pbVar10 = pbVar10 + 0x1c;
        } while (pbVar6 != pbVar9);
      }
      puVar3[6] = pbVar2;
    }
    FUN_012d6310();
  }
  puVar3 = *(undefined4 **)((int)tree + 0x34);
  local_14 = (undefined4 *)*puVar3;
  local_18 = (void *)((int)tree + 0x30);
  while( true ) {
    puVar7 = local_14;
    pvVar4 = local_18;
    if ((local_18 == (void *)0x0) || (local_18 != (void *)((int)tree + 0x30))) {
      FUN_00d83c2d();
    }
    if (puVar7 == puVar3) break;
    if (pvVar4 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar7 == *(undefined4 **)((int)pvVar4 + 4)) {
      FUN_00d83c2d();
    }
    puVar7[4] = 3;
    FUN_012d60b0();
  }
  return;
}

