// addr: 0x014d0170
// name: GuildCommand_TransferGuild_dtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_TransferGuild_dtor(void * this) */

void __fastcall GuildCommand_TransferGuild_dtor(void *this)

{
  rsize_t _DstSize;
  int *piVar1;
  void *_Src;
  void *_Dst;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destructor for GuildCommand_TransferGuild; it destroys each owned Guild
                       pointer in its vector, frees the vector storage, clears the vector, and runs
                       GuildCommand base cleanup. */
  puStack_8 = &LAB_016abe63;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_TransferGuild::vftable;
  local_4 = 1;
  piVar1 = *(int **)((int)this + 0x10);
  if (piVar1 < *(int **)((int)this + 0xc)) {
    FUN_00d83c2d(uVar2);
  }
  piVar4 = *(int **)((int)this + 0xc);
  if (*(int **)((int)this + 0x10) < piVar4) {
    FUN_00d83c2d(uVar2);
  }
  while( true ) {
    if (this == (void *)0xfffffff8) {
      FUN_00d83c2d(uVar2);
    }
    if (piVar4 == piVar1) break;
    if (this == (void *)0xfffffff8) {
      FUN_00d83c2d(uVar2);
    }
    if (*(int **)((int)this + 0x10) <= piVar4) {
      FUN_00d83c2d(uVar2);
    }
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    if (*(int **)((int)this + 0x10) <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 1;
  }
  _Src = *(void **)((int)this + 0x10);
  if (_Src < *(void **)((int)this + 0xc)) {
    FUN_00d83c2d(uVar2);
  }
  _Dst = *(void **)((int)this + 0xc);
  if (*(void **)((int)this + 0x10) < _Dst) {
    FUN_00d83c2d(uVar2);
  }
  if (_Dst != _Src) {
    iVar3 = *(int *)((int)this + 0x10) - (int)_Src >> 2;
    _DstSize = iVar3 * 4;
    if (0 < iVar3) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)((int)this + 0x10) = (void *)(_DstSize + (int)_Dst);
  }
  local_4 = local_4 & 0xffffff00;
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

