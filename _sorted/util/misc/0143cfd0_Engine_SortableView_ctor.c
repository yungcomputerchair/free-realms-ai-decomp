// addr: 0x0143cfd0
// name: Engine_SortableView_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_SortableView_ctor(void * this) */

void __fastcall Engine_SortableView_ctor(void *this)

{
                    /* Initializes an Engine::SortableView object: the vtable symbol is explicit and
                       the function zeros three fields after the vtable. */
  *(undefined ***)this = Engine::SortableView::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}

