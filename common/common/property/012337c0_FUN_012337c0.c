// addr: 0x012337c0
// name: FUN_012337c0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void ResourceIndex_buildEntryList(void * this) */

void __thiscall ResourceIndex_buildEntryList(void *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  uint uVar4;
  int in_stack_00000008;
  uint in_stack_0000000c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *in_stack_00000010;
  uint uStack_54;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [4];
  void *local_30;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Builds or refreshes a string/vector entry list from resource index data and
                       frees temporaries. */
  local_8 = 0xffffffff;
  puStack_c = &LAB_01651c08;
  local_10 = ExceptionList;
  uStack_54 = DAT_01b839d8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_1c = 0xf;
  uVar4 = 0;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_18 = uStack_54;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_34,in_stack_00000010,0,0xffffffff);
  local_8 = 0;
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    uVar4 = (*(int *)((int)this + 0xc) - iVar2) / 0x1c;
  }
  if (in_stack_0000000c != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x1c;
    }
    if (0x9249249U - iVar1 < in_stack_0000000c) {
      FUN_01232450();
      iVar2 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x1c;
    }
    if (uVar4 < iVar1 + in_stack_0000000c) {
      if (0x9249249 - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x1c;
      }
      if (uVar4 < iVar2 + in_stack_0000000c) {
        iVar2 = FUN_01230e00();
        uVar4 = iVar2 + in_stack_0000000c;
      }
      iVar1 = FUN_01231620(uVar4);
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar3 = FUN_01233720(*(undefined4 *)((int)this + 4),in_stack_00000008,iVar1);
      uVar3 = FUN_01233440(uVar3,in_stack_0000000c,local_34);
      FUN_01233720(in_stack_00000008,*(undefined4 *)((int)this + 8),uVar3);
      local_8 = 0;
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
        StdStringRange_destroy(*(void **)((int)this + 4),*(void **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(uint *)((int)this + 0xc) = iVar1 + uVar4 * 0x1c;
      *(uint *)((int)this + 8) = iVar1 + (in_stack_0000000c + iVar2) * 0x1c;
      *(int *)((int)this + 4) = iVar1;
    }
    else {
      iVar2 = *(int *)((int)this + 8);
      if ((uint)((iVar2 - in_stack_00000008) / 0x1c) < in_stack_0000000c) {
        FUN_01233720(in_stack_00000008,iVar2,in_stack_0000000c * 0x1c + in_stack_00000008);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_01233440(*(undefined4 *)((int)this + 8),
                     in_stack_0000000c - (*(int *)((int)this + 8) - in_stack_00000008) / 0x1c,
                     local_34);
        local_8 = 0;
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + in_stack_0000000c * 0x1c;
        FUN_01232a30(in_stack_00000008,*(int *)((int)this + 8) + in_stack_0000000c * -0x1c,local_34)
        ;
      }
      else {
        iVar1 = iVar2 + in_stack_0000000c * -0x1c;
        uVar3 = FUN_01233720(iVar1,iVar2,iVar2);
        *(undefined4 *)((int)this + 8) = uVar3;
        FUN_01233750(in_stack_00000008,iVar1,iVar2);
        FUN_01232a30(in_stack_00000008,in_stack_0000000c * 0x1c + in_stack_00000008,local_34);
      }
    }
  }
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_10;
  return;
}

