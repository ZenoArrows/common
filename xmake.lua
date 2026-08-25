-- set project constants
set_project("common")
set_version("0.0.0")
set_languages("c++17")
set_warnings("allextra")

-- add common rules
add_rules("mode.debug", "mode.releasedbg")
add_rules("plugin.vsxmake.autoupdate")

-- define targets
target("common")
    set_kind("static")
    -- add src files
    add_files("common/**.cpp")
    add_headerfiles("common/**.h")
    add_includedirs(".", { public = true })
    set_pcxxheader("common/IPrefix.h")
	add_links("Comdlg32")
