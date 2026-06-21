// addr: 0x01424260
// name: CommandObjectList_dtor
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectList_dtor(void * this) */

void __fastcall CommandObjectList_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destroys a CommandObjectList-like object by destroying its embedded
                       ReturnValueMap and freeing two vector buffers at offsets +0x14 and +4. */
  puStack_8 = &LAB_01694d1e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  ReturnValueMap_dtor((void *)((int)this + 0x20));
  local_4 = local_4 & 0xffffff00;
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  local_4 = 0xffffffff;
  if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return;
}

