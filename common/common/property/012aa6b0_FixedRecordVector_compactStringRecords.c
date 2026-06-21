// addr: 0x012aa6b0
// name: FixedRecordVector_compactStringRecords
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FixedRecordVector_compactStringRecords(void * this) */

void __fastcall FixedRecordVector_compactStringRecords(void *this)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *name;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar6;
  void *local_18;
  void *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies the active string-record range, removes each copied record via the
                       string-key removal helper, then compacts/moves strings in the original
                       vector. Evidence is repeated calls to FixedRecordVector_removeRecordByString
                       and StdStringRange_destroy. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166c508;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  FUN_01246d00((int)this + 0x10);
  local_4 = 0;
  name = local_18;
  if (local_14 < local_18) {
    FUN_00d83c2d(uVar3);
    FUN_00d83c2d(uVar3);
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d(uVar3);
    }
    if (name == local_14) break;
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (local_14 <= name) {
      FUN_00d83c2d();
    }
    FixedRecordVector_removeRecordByString(this,name);
    if (local_14 <= name) {
      FUN_00d83c2d();
    }
    name = (void *)((int)name + 0x1c);
  }
  pbVar6 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
            ((int)this + 0x18);
  if (pbVar6 < *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                ((int)this + 0x14)) {
    FUN_00d83c2d();
  }
  pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
            ((int)this + 0x14);
  if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
       ((int)this + 0x18) < pbVar1) {
    FUN_00d83c2d();
  }
  if (pbVar1 != pbVar6) {
    pbVar2 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              ((int)this + 0x18);
    iVar4 = (int)pbVar2 - (int)pbVar6;
    if (pbVar6 != pbVar2) {
      iVar5 = (int)pbVar1 - (int)pbVar6;
      do {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar6 + iVar5),pbVar6,0,0xffffffff);
        pbVar6 = pbVar6 + 0x1c;
      } while (pbVar6 != pbVar2);
    }
    StdStringRange_destroy(pbVar1 + (iVar4 / 0x1c) * 0x1c,*(void **)((int)this + 0x18));
    *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
     ((int)this + 0x18) = pbVar1 + (iVar4 / 0x1c) * 0x1c;
  }
  local_4 = 0xffffffff;
  if (local_18 == (void *)0x0) {
    ExceptionList = local_c;
    return;
  }
  StdStringRange_destroy(local_18,local_14);
                    /* WARNING: Subroutine does not return */
  _free(local_18);
}

