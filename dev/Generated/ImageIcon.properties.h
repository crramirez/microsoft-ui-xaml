// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class ImageIconProperties
{
public:
    ImageIconProperties();

    void Source(winrt::ImageSource const& value);
    winrt::ImageSource Source();

    static winrt::DependencyProperty SourceProperty() { return s_SourceProperty; }

    static GlobalDependencyProperty s_SourceProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnSourcePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
