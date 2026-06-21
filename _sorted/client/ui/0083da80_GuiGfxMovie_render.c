// addr: 0x0083da80
// name: GuiGfxMovie_render
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiGfxMovie_render(void * this) */

void __fastcall GuiGfxMovie_render(void *this)

{
  int iVar1;
  
                    /* Renders the GuiGfxMovie at this+0x118 through GFxWrap::RenderMovie using
                       stored viewport/rectangle fields and accumulates the returned render
                       cost/count globally. If no movie exists it reuses the cached value at
                       this+0x168. */
  if (*(GuiGfxMovie **)((int)this + 0x118) != (GuiGfxMovie *)0x0) {
    iVar1 = GFxWrap::RenderMovie
                      (*(GuiGfxMovie **)((int)this + 0x118),*(int *)((int)this + 0x108),
                       *(int *)((int)this + 0x110),*(int *)((int)this + 0x10c),
                       *(int *)((int)this + 0x114));
    *(int *)((int)this + 0x168) = iVar1;
    DAT_01be15d8 = DAT_01be15d8 + iVar1;
    return;
  }
  DAT_01be15d8 = DAT_01be15d8 + *(int *)((int)this + 0x168);
  return;
}

