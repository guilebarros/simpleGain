#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"


class SimpleGainAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    SimpleGainAudioProcessorEditor (SimpleGainAudioProcessor&);
    ~SimpleGainAudioProcessorEditor() override;

    
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    
    juce::Slider gainSlider;

    SimpleGainAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SimpleGainAudioProcessorEditor)
};
