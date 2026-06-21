// addr: 0x0143c1e0
// name: Engine_SortableView_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_SortableView_dtor(void * self) */

void __fastcall Engine_SortableView_dtor(void *self)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys an Engine::SortableView by restoring its vftable and freeing vector
                       storage at offset 8, then zeroing vector fields. The vftable symbol gives the
                       class name. */
  pvVar1 = ExceptionList;
  puStack_8 = &LAB_01697e0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)self = Engine::SortableView::vftable;
  local_4 = 0xffffffff;
  if (*(void **)((int)self + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)self + 8));
  }
  *(undefined4 *)((int)self + 8) = 0;
  *(undefined4 *)((int)self + 0xc) = 0;
  *(undefined4 *)((int)self + 0x10) = 0;
  ExceptionList = pvVar1;
  return;
}

