// addr: 0x012ec880
// name: Utility_TokenBuilder_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Utility_TokenBuilder_dtor(void * this) */

void __fastcall Utility_TokenBuilder_dtor(void *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for Utility::TokenBuilder: sets the TokenBuilder vftable, releases
                       two small-string-buffer members when heap backed, clears them, then
                       destroys/frees an internal vector buffer. The vftable symbol provides the
                       class name. */
  pvVar1 = ExceptionList;
  puStack_8 = &LAB_01673401;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Utility::TokenBuilder::vftable;
  local_4 = 1;
  if (0xf < *(uint *)((int)this + 0x48)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x34));
  }
  *(undefined4 *)((int)this + 0x48) = 0xf;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x2c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  local_4 = 0xffffffff;
  if (*(void **)((int)this + 8) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 8),*(void **)((int)this + 0xc));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = pvVar1;
  return;
}

